/*
** EPITECH PROJECT, 2019
** my_runner
** File description:
** main
*/

#include "my.h"

void my_runner(window_t *win)
{
	if (win->data->dead)//si le player tombe dans une trap et quil meurt
		set_frame_blood(win);//on affiche du sang, s il reste des vie, le jeu se repete autrement game over
	else {
		if ((win->data->dead = check_trap(win)))//on check si le player touche des traps
			set_death(win);//le player perd une vie ou alors game over s il na plus aucune vie
		parallax(win, win->plx);
		win->data->hit = check_hit(win);
		if (!win->data->jump)//si j appuie sur espace
			set_gravity(win);//le player saute mais ne revient pas au sol, il continue a planer
		if (!win->data->gravity && !win->data->hit && !win->data->jump)
			set_frame(win);//sans cette fonction le player avance en restant immobile
		if (!win->data->gravity)
			event_jump(win);//evenement jump
		set_score(win->menu, ++win->data->score);//le score se met en route
		check_win(win);
	}
}

void game_event(window_t *win)
{
	if (win->event.type == sfEvtClosed)//s il n y a pas de donnees d evenement
		sfRenderWindow_close(win->window);//on ferme la fenêtre de rendu (mais ne détruit pas les données internes)
	//if (win->event.type == sfEvtMouseButtonPressed) {//si un bouton de la souris a ete enfoncer(données dans event.mouseButton)
		//if (check_exit(win, win->event) && !win->data->start)
		//	sfRenderWindow_close(win->window);
	//}
	event_button(win);//on peut utiliser les touches esc, enter, up et down
}

void game_loop(window_t *win)
{
	set_music(win);//mettre la musique du jeu
	sfSound_play(win->menu->sound);//lancer la musique du jeu
	platform_maker(win, win->map);//creation des blocs dans le jeu, avec leur positions et tt ce qui s en suit.
	trap_maker(win, win->map);//creation des traps dans le jeu, avec leur positions et tt ce qui s en suit.
	win->data->score = 0;//on initialise le score a 0.
	win->clock = sfClock_create();//on demarre l horloge pour que le score evolue.
	while (sfRenderWindow_isOpen(win->window)) {//tant que la fenetre est ouverte
		while (sfRenderWindow_pollEvent(win->window, &win->event))//et tant que l'événement est au-dessus de la file d'attente de la fenêtre, affichez la suite.
			game_event(win);//evenement de jeu mis en place, essentiellement les keyboards.
		if (!win->data->start)//le jeu ne commence pas si cette condition n existe pas
			render_menu(win, win->plx, win->map);//mise en place de tous les dessins en mode menu
		else {//le jeu peut commencer et le menu se desaffiche
			my_runner(win);//keys board, mort ? en vie ? jump envent et score.
			render_game(win, win->plx, win->map);//mise en place de tous les dessins en mode jeu courant
		}
	}
	destroy_menu(win);
	destroy_win(win);
	free_all(win);
}

int main(int ac, char **av)
{
	window_t *win; //on declare la structure window en lui donnant le nom win.

	if (usage(av, ac)) //fonction qui gere l option -h
		return (0);
	if (error(av, ac)) // je check si le file existe ou si il ya une erreur d arguments.
		return (84);
	win = malloc(sizeof(*win)); // on malloc la taille pour win
	win = set_window(win, av[1]);
	game_loop(win);
	free(win);
	return (0);
}
