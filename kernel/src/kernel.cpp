#include "kernel.h"

void Logo(Framebuffer* framebuffer, UNICODE_FONT* unicode_font){

    for(int i = 0; i < 1e+9; i++){} //1 second in nanoseconds

	println();
	println();
	Print(framebuffer, unicode_font, 0xFFFDD0, "   ____                         ___  ____  ");
	println(); 
 	Print(framebuffer, unicode_font, 0xFFFDD0, " / ___|_   _  __ ___   ____ _ / _ \\/ ___| ");
	println(); 
 	Print(framebuffer, unicode_font, 0xFFFDD0, "| |  _| | | |/ _` \\ \\ / / _` | | | \\___ \\");
	println(); 
 	Print(framebuffer, unicode_font, 0xFFFDD0, "| |_| | |_| | (_| |\\ V / (_| | |_| |___) |");
	println(); 
 	Print(framebuffer, unicode_font, 0xFFFDD0, " \\____|\\__,_|\\__,_| \\_/ \\__,_|\\___/|____/");
	println(); 
	println();

	Print(framebuffer, unicode_font, 0xFFFDD0, "					..ohhhhyoo+/:```     						   		   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                    `::hNNNNNMMNmd//.``           						   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                     ..ohhmmNMMMMNmmo--                					   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                       `....:++mNNMMmdd``                   			   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                            `..osyMMMMM--.                       		   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                               --/MMMMM++:``                          	   ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                             ``--/mmNMMdds::.``                            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                          //+yydmmNNMMMNNNmmhhy++-                         ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                     ``:++hhdNNMMMNNNNNNNNMMNNNddsoo```                    ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                    `--sddMMMNNmmmhhhhhhhdmmNNNMMNNN//-                    ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                  ``-mmNMMNNmdd/:-```````.--shhNNMMMMMy--`                 ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                  +osNNMMMss+::...```````...--:oodMMMMmyy.                 ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                ``ydmMMmdd::-`````````````````.--ohhMMNmm/--               ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               `--dNMMMhss```````````````````````://NNNMMso+               ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               -ssNMMNN+..``````````````````````````ddmMMmdy               ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               :ddNMNhh/````````````````````````````oohMMNNh               ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               /mmMMNss:``````````````````````````..::sMMMMd``             ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               /NNMMNoo:``````````````````````````..--oMMMMm..`            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               /NNMMmoo:````````````````````````````..oMMMMm--`            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "               /NNMMmoo:..``````````````````````````..oNNMMm::.            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "             ``+NNMMm++-..``````````````````````````..+NNMMm++.            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "             ..oMMMMm::-..````````````````````````````/mmNMNss-            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "             //yMMMMd...``````````````````````````````/hhNMMmm/            ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "           ``NNNMMdhs`````````````````````````````````:oomMMMMo..          ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "          .::MMMMMs+/`````````````````````````````````.::dNNMMhss          ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "        ..+yyMMNNN/--::://```````````````````````---//:..yddMMNmm--.       ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "       `//hMMMMmhh-.-sshdd...````````````````````/oodds../+oMMMMMyy/``     ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "     ..:NNMMMMMy---:+MMMMM//:`````````````````...yMMMMdoo-.-ddNMMMMd++`    ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "     osyMMMNN++:../+sMMMMMyy+`````````````````.::hMMMMmhh-`.::ymmMMNdd-``  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "   ``hmmMMmhh...``:/+ddNMMddo`````````````````.--sddMMNdd-``../ssMMMNN+/:  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  `::mMMMMy++`````..-ssdMMNNs..``````````````````/ooNNNmm-``.....NNNMMhyo  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  :yyNMNmm+..`````..-ssdMMNNy..``````````````````:++MMNmm-```````yydMMmmy  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  /mmMMNyy/```````/+ommNMMddo`````````````````.::ymmMMNdd-`````..++yMMNNh  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "``/NNMMNss:```````/+oMMMMMss/`````````````````.::hMMMMmyy-````...::sMMMNd``");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "``+NNMMNoo:`````..--/NNNNN::-`````````````````...sNNNNh++.`````..--oMMMMd``");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "``+NNMMNoo:`````````-ooyyy...````````````````````/oohho...`````..::sMMMMd``");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  /mmNMNyy:`````````...---```````````````````````...--...``````..++yMMNNh  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  :yyNMNdd/..````````````````````````````````````````````````````yydMMmmh  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "  .//mMMNNo::`````````````````````````````````````````````````...mmNMMdhs  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "   ``dNNMMdhh```````````````````````````````````````````````..://MMMMMs+/  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "     syhMMNNN++:..`````````````````````````````````````````.::ymmMMNmm:``  ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "     -:+mmNMMddy++---...........-........................:/+yymMMMMdoo.    ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "       .yydNNMMNddo++::::::::///+/::::::::///+/:::::::///yhhMMMMMdds--`    ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "        ``+hhNNNMMMMMMMNNNMMMMMMMMMMNNNMMMMMMMMMMNNNMMMMMMMMNNNNN--.       ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "          .--ooymmMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNyy+::``        ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "             ..:++ssyhhhhhhhhyyyyyhhhhhhhhyyyyyhhhhhhhhyyoo+::.``          ");
	println(); 
	Print(framebuffer, unicode_font, 0xFFFDD0, "                  .--////////::--:////////:::-:////////::.`				   ");
	println();
}

extern "C" void start(Framebuffer* framebuffer, UNICODE_FONT* unicode_font){

		// starts from top left corner of the screen start off with (0,0)

		CharPosition.X = 0;

		Logo(framebuffer, unicode_font);

        // bytes per pixel, each pixel is 4 bytes wide because it has a red green and alpha channel

        // 0X indicates that it is a hex number and that is the only purpose of 0X.

        // A framebuffer (frame buffer, or sometimes framestore) is a portion of random-access memory (RAM) containing a bitmap that drives a video display.

        // The information in the buffer typically consists of color values for every pixel to be shown on the display.

        return;

}