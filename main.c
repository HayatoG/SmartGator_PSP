#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void)
{

  //Inicialização de libs do Allegro
  al_init();
  al_init_image_addon();
  al_install_audio();
  al_init_acodec_addon();
  al_reserve_samples(1);
  al_install_mouse();
  al_init_font_addon();
  al_init_ttf_addon();
  al_install_keyboard();




return 0;


}
