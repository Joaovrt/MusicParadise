#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    system("color 0c");
    srand(time(NULL));

    int nacionalidade, generoi, generon, musica, i, j;
    
    system ("cls");
   
   printf ("\n\n Carregando: \n\n");          
     
     // inicio loading screen
     
   for (i = 0; i <= 100; i++) {
                      
      printf ("  %d%%\r", i);
      fflush (stdout);      
	  
	  Sleep(10);                
         
      for (j = 0; j < i; j++){
      	
         if (!j) 
           printf ("  ");
           
         printf ("%c", 219);
      }                      
   } 
    
   setlocale(LC_ALL, "portuguese");  // definindo linguagem pt-BR como padrão 
         
   printf ("\n\n Finalizando...");
   
   	int intro = 0, intro2 = 0;  // inicio intro zelda
	
	while (intro < 4){
		Beep(391, 100);
		Sleep(40);
		
		Beep(440, 100);
		Sleep(40);
		
		Beep(493, 100);
		Sleep(40);
		
		Beep(554, 100);	
		Sleep(40);
		
		intro++;
}

	while (intro2 < 4){
		Beep(415, 100);
		Sleep(40);
		
		Beep(466, 100);
		Sleep(40);
		
		Beep(523, 100);
		Sleep(40);
		
		Beep(587, 100);	
		Sleep(40);
		
		intro2++;
}



	Sleep(200);

	Beep(880, 250);

	Beep(932, 240);

	Beep(987, 340);

	Beep(1046, 990);         // fim intro zelda 
   
   printf("\r\n\n  ============\n"
		     " | Concluído! |\n"
		     "  ============\n");
   
   printf("\n Pressione qualquer tecla para continuar... ");
   
   getche();  
   
   // fim loading screen
       

do{  
    system("cls");
	printf("  ==================================\n"
		   " | Bem-vindo(a) ao Music Paradise \x0e |\n"
	       " |----------------------------------|\n"
		   " |                                  |\n" 
	       " | Escolha a sua opção:             |\n"
	       " |                                  |\n"
           " | 1- Músicas Internacionais        |\n"
           " |                                  |\n"
           " | 2- Músicas Brasileiras           |\n"
           " |                                  |\n"
           " | 3- Desenvolvedores do programa   |\n"
           " |                                  |\n"
           " | 0- Sair                          |\n"
           " |                                  |\n"
		   " | Digite a opção desejada: ");
    scanf("%i", &nacionalidade);
    fflush(stdin);
    system("cls");

    switch(nacionalidade){
	do{
		do{
		system("cls");
        case 1: printf("  ===========================================\n"
		               " | Escolha qual gênero musical quer escutar: |\n"
		               " |-------------------------------------------|\n"
                       " | 1- Rock                                   |\n"
                       " | 2- Blues/Jazz                             |\n"
                       " | 3- Country                                |\n"
                       " | 4- Pop                                    |\n"
                       " | 5- Eletrônica                             |\n"
                       " | 6- Rap/Trap                               |\n"
                       " | 7- Lo-fi                                  |\n"
                       " | 0- Voltar                                 |\n"
                       " |                                           |\n"
                       " | Digite a sua escolha: ");
                scanf("%i", &generoi);
                fflush(stdin);
                if(generoi!=0 && generoi!=1 && generoi!=2 && generoi!=3 && generoi!=4 && generoi!=5 && generoi!=6 && generoi!=7)
				{
					system("cls");
					printf("\n  ================\n"
							" | Opção inválida |\n"
							"  ----------------\n");
					printf("\n\n");
					system("pause");
				}
			} while(generoi!=0 && generoi!=1 && generoi!=2 && generoi!=3 && generoi!=4 && generoi!=5 && generoi!=6 && generoi!=7);         	
				system("cls");
                switch(generoi){
                do{
                	do{
                		system("cls");
			        case 1: printf("  =================================================================\n"
					               " |                              Rock                               |\n"
					               " |-----------------------------------------------------------------|\n"
					               " |                                                                 |\n"
			                       " | 1- We Will Rock You — Queen                                     |\n"
			                       " |                                                                 |\n"
			                       " | 2- It’s Only Rock ‘n’ Roll (But I Like It) — The Rolling Stones |\n"
			                       " |                                                                 |\n"
			                       " | 3- My Generation — The Who                                      |\n"
			                       " |                                                                 |\n"
			                       " | 4- Stairway To Heaven — Led Zeppelin                            |\n"
			                       " |                                                                 |\n"
			                       " | 5- Enter Sandman — Metallica                                    |\n"
			                       " |                                                                 |\n"
								   " | 0- Voltar                                                       |\n"
								   " |                                                                 |\n"
								   " | Digite que musica quer escutar: ");
			        	
									scanf("%i", &musica);
					        		fflush(stdin);
					        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m1.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m2.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m3.mp3");
			        					system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m4.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m5.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch Rock Internacional
			    } while(musica!=0);
			    			continue;
			    do{
			        do{
                		system("cls");
			    	case 2: printf("  ===========================================\n"
					               " |                 Blues/Jazz                |\n"
					               " |-------------------------------------------|\n"
					               " |                                           |\n"
			                       " | 1- Hellhound On My Trail - Robert Johnson |\n"
			                       " |                                           |\n"
			                       " | 2- How Many More Years - Howlin’ Wolf     |\n"
			                       " |                                           |\n"
			                       " | 3- Gimme a Pigfoot - Bessie Smith         |\n"
			                       " |                                           |\n"
			                       " | 4- So What - Miles Davis                  |\n"
			                       " |                                           |\n"
			                       " | 5- My Favorite Things - John Coltrane     |\n"
			                       " |                                           |\n"
			                       " | 0- Voltar                                 |\n"
								   " |                                           |\n"
								   " | Digite que musica quer escutar: ");
			        				scanf("%i", &musica);
					        		fflush(stdin);
					        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m6.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m7.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m8.mp3");
			        					system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m9.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m10.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch blues/jazz
			    } while(musica!=0);
	    					continue;
				do{		
			        do{
                		system("cls");		
			        case 3: printf("  ===========================================\n"
					               " |                  Country                  |\n"
					               " |-------------------------------------------|\n"
					               " |                                           |\n"
			                       " | 1- I Walk the Line – Johnny Cash          |\n"
			                       " |                                           |\n"
			                       " | 2- $ 1000 Wedding – Willie Nelson         |\n"
			                       " |                                           |\n"
			                       " | 3- Need You Now – Lady Antebellum         |\n"
			                       " |                                           |\n"
			                       " | 4- I Will Always Love You – Dolly Parton  |\n"
			                       " |                                           |\n"
			                       " | 5- The Gambler – Kenny Rogers             |\n"
			                       " |                                           |\n"
			                       " | 0- Voltar                                 |\n"
								   " |                                           |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m11.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m12.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m13.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m14.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m15.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch Country
				} while(musica!=0);
	    					continue;
	    		do{
					do{
                		system("cls");					
					case 4: printf("  ========================================\n"
					               " |                   Pop                  |\n"
					               " |----------------------------------------|\n"
					               " |                                        |\n"
			                       " | 1- Sugar - Maroon 5                    |\n"
			                       " |                                        |\n"
			                       " | 2- Shape Of You - Ed Sheeran           |\n"
			                       " |                                        |\n"
			                       " | 3- You're Beautiful - James Blunt      |\n"
			                       " |                                        |\n"
			                       " | 4- Someone You Loved - Lewis Capaldi   |\n"
			                       " |                                        |\n"
			                       " | 5- All Of Me - John Legend             |\n"
			                       " |                                        |\n"
			                       " | 0- Voltar                              |\n"
								   " |                                        |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m16.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m17.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m18.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m19.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m20.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch pop
			    } while(musica!=0);
	    					continue;
	    		do{
			        do{
                		system("cls");		
			        case 5: printf("  ==================================\n"
					               " |            Eletrônica            |\n"
					               " |----------------------------------|\n"
					               " |                                  |\n"
			                       " | 1- The Nights - Avicii           |\n"
			                       " |                                  |\n"
			                       " | 2- The Days - Avicii             |\n"
			                       " |                                  |\n"
			                       " | 3- Addicted To You - Avicii      |\n"
			                       " |                                  |\n"
			                       " | 4- I Could Be The One - Avicii   |\n"
			                       " |                                  |\n"
			                       " | 5- Lay Me Down - Sam Smith       |\n"
			                       " |                                  |\n"
			                       " | 0- Voltar                        |\n"
								   " |                                  |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m21.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m22.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m23.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m24.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m25.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch eletronica			        		
			    } while(musica!=0);
	    					continue;
	    		do{
			        do{
                		system("cls");		
			        case 6: printf("  ======================================\n"
					               " |               Rap/Trap               |\n"
					               " |--------------------------------------|\n"
					               " |                                      |\n"
			                       " | 1- Travis Scott - Goosebumps         |\n"
			                       " |                                      |\n"
			                       " | 2- Circles - Post Malone             |\n"
			                       " |                                      |\n"
			                       " | 3- Spoil My Light - Post Malone      |\n"
			                       " |                                      |\n"
			                       " | 4- Drake - God's Plan                |\n"
			                       " |                                      |\n"
			                       " | 5- Hold On, We're Going Home - Drake |\n"
			                       " |                                      |\n"
			                       " | 0- Voltar                            |\n"
								   " |                                      |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m26.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m27.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m28.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m29.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m30.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch Rap/trap
			    } while(musica!=0);
	    					continue;
				do{        
					do{
                		system("cls");
			        case 7: printf("  ===================================\n"
					               " |               Lo-fi               |\n"
					               " |-----------------------------------|\n"
					               " |                                   |\n"
			                       " | 1- Sunflower - Snuggles           |\n"
			                       " |                                   |\n"
			                       " | 2- Now that you're gone - Kavv    |\n"
			                       " |                                   |\n"
			                       " | 3- Snowman - WYS                  |\n"
			                       " |                                   |\n"
			                       " | 4- Too ugly - Natural Flavor      |\n"
			                       " |                                   |\n"
			                       " | 5- Feblu - Flughand               |\n"
			                       " |                                   |\n"
			                       " | 0- Voltar                         |\n"
								   " |                                   |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m31.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m32.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        			case 3: system("start \musicas./m33.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 4: system("start \musicas./m34.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m35.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
							}//fim do switch Lofi
			    } while(musica!=0);
	    					continue;
			    }// fim do switch generoi
    } while(generoi != 0);
    			continue;
    do{
		do{
		system("cls");
        case 2: printf("  ===========================================\n"
		               " | Escolha qual gênero musical quer escutar: |\n"
		               " |-------------------------------------------|\n"
                       " | 1- Sertanejo                              |\n"
                       " | 2- MPB                                    |\n"
                       " | 3- Rock                                   |\n"
                       " | 4- Samba/Pagode                           |\n"
                       " | 5- Rap/Trap                               |\n"
                       " | 6- Funk                                   |\n"
                       " | 7- Pop                                    |\n"
                       " | 8- Eletrônica                             |\n"
                       " | 0- Voltar                                 |\n"
                       " |                                           |\n"
					   " | Digite a sua escolha: ");
                scanf("%i", &generon);
                fflush(stdin);
                if(generon!=0 && generon!=1 && generon!=2 && generon!=3 && generon!=4 && generon!=5 && generon!=6 && generon!=7 && generon!=8)
                {
					system("cls");
					printf("\n  ================\n"
		             		" | Opção inválida |\n"
							"  ----------------\n");
					printf("\n\n");
					system("pause");
				}
			} while(generon!=0 && generon!=1 && generon!=2 && generon!=3 && generon!=4 && generon!=5 && generon!=6 && generon!=7 && generon!=8); 
                system("cls");
                switch(generon){
                	do{
                		do{
                		system("cls");
			        case 1: printf("  ===============================================\n"
					               " |                   Sertanejo                   |\n"
					               " |-----------------------------------------------|\n"
					               " |                                               |\n"
			                       " | 1- Na Linha do Tempo - Victor & Leo           |\n"
			                       " |                                               |\n"
			                       " | 2- Romântico Anônimo - Marcos & Belutti       |\n"
			                       " |                                               |\n"
			                       " | 3- O que 'ce' vai fazer - Fernando & Sorocaba |\n"
			                       " |                                               |\n"
			                       " | 4- Singular - Loubet                          |\n"
			                       " |                                               |\n"
			                       " | 5- O Nosso Santo Bateu - Matheus & Kauan      |\n"
			                       " |                                               |\n"
			                       " | 0- Voltar                                     |\n"
								   " |                                               |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			        		switch(musica){
								case 1: system("start \musicas./m36.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m37.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m38.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m39.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m40.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas sertanejo
			    	} while(musica!=0);
	    					continue;
			    	do{
			    		do{
                		system("cls");		
			    	case 2: printf("  =====================================\n"
					               " |                 MPB                 |\n"
					               " |-------------------------------------|\n"
					               " |                                     |\n"
			                       " | 1- Aquarela - Toquinho              |\n"
			                       " |                                     |\n"
			                       " | 2- Admirável Gado Novo - Zé Ramalho |\n"
			                       " |                                     |\n"
			                       " | 3- Chega de Saudade - João Gilberto |\n"
			                       " |                                     |\n"
			                       " | 4- País Tropical - Jorge Ben        |\n"
			                       " |                                     |\n"
			                       " | 5- Vambora - Adriana Calcanhotto    |\n"
			                       " |                                     |\n"
			                       " | 0- Voltar                           |\n"
								   " |                                     |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        					        		
			        		switch(musica){
								case 1: system("start \musicas./m41.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m42.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m43.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m44.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m45.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas MPB
			        } while(musica!=0);
	    					continue;
			        do{
			        	do{
                		system("cls");		
			        case 3: printf("  =============================================\n"
					               " |                     Rock                    |\n"
					               " |---------------------------------------------|\n"
					               " |                                             |\n"
			                       " | 1- Tempo Perdido - Legião Urbana            |\n"
			                       " |                                             |\n"
			                       " | 2- Os cegos do castelo - Titãs              |\n"
			                       " |                                             |\n"
			                       " | 3- Le Premier Bonheur Du Jour - Os Mutantes |\n"
			                       " |                                             |\n"
			                       " | 4- Índios - Legião Urbana                   |\n"
			                       " |                                             |\n"
			                       " | 5- Nem 5 minutos guardados - Titãs          |\n"
			                       " |                                             |\n"
			                       " | 0- Voltar                                   |\n"
								   " |                                             |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        		
			    			switch(musica){
								case 1: system("start \musicas./m46.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m47.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m48.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m49.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m50.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas rock
			        } while(musica!=0);
	    					continue;
					do{
						do{
                		system("cls");
					case 4: printf("  ==========================================\n"
					               " |               Samba/Pagode               |\n"
					               " |------------------------------------------|\n"
					               " |                                          |\n"
			                       " | 1- Camisa 10 - Turma do Pagode           |\n"
			                       " |                                          |\n"
			                       " | 2- Sua Mãe Vai Me Amar - Turma do Pagode |\n"
			                       " |                                          |\n"
			                       " | 3- Desencana - Thiaguinho                |\n"
			                       " |                                          |\n"
			                       " | 4- Deixa Tudo Como Tá - Thiaguinho       |\n"
			                       " |                                          |\n"
			                       " | 5- Vou pro Sereno - Turma do Pagode      |\n"
			                       " |                                          |\n"
			                       " | 0- Voltar                                |\n"
								   " |                                          |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
										        		
			    			switch(musica){
								case 1: system("start \musicas./m51.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m52.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m53.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m54.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m55.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas samba/pagode
			        } while(musica!=0);
	    					continue;
			        do{
			        	do{
                		system("cls");		
			        case 5: printf("  ======================================\n"
					               " |               Rap/Trap               |\n"
					               " |--------------------------------------|\n"
					               " |                                      |\n"
			                       " | 1- Até quando? - Gabriel, o Pensador |\n"
			                       " |                                      |\n"
			                       " | 2- Negro Drama - Racionais MC's      |\n"
			                       " |                                      |\n"
			                       " | 3- Mun-Rá - Sabotage                 |\n"
			                       " |                                      |\n"
			                       " | 4- Só Deus pode me julgar - MV Bill  |\n"
			                       " |                                      |\n"
			                       " | 5- Mandume - Emicida                 |\n"
			                       " |                                      |\n"
			                       " | 0- Voltar                            |\n"
								   " |                                      |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        					        		
			    			switch(musica){
								case 1: system("start \musicas./m56.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m57.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m58.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m59.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m60.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas rap/trap
			       	} while(musica!=0);
	    					continue;
			        do{
			        	do{
                		system("cls");			
			        case 6: printf("  ==============================================================\n"
					               " |                            Funk                              |\n"
					               " |--------------------------------------------------------------|\n"
					               " |                                                              |\n"
			                       " | 1- Saudade Né? - Kevin O Chris e Dilsinho                    |\n"
			                       " |                                                              |\n"
			                       " | 2- Vai Ter Que Aguentar - MC Don Juan part. Maiara e Maraisa |\n"
			                       " |                                                              |\n"
			                       " | 3- Artigo 157 - Biel & Tatá                                  |\n"
			                       " |                                                              |\n"
			                       " | 4- Loco - Anitta                                             |\n"
			                       " |                                                              |\n"
			                       " | 5- Desce Pro Play - MC Zaac, Anitta, Tyga                    |\n"
			                       " |                                                              |\n"
			                       " | 0- Voltar                                                    |\n"
								   " |                                                              |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        					        		
			    			switch(musica){
								case 1: system("start \musicas./m61.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m62.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m63.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m64.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m65.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas funk
			        } while(musica!=0);
	    					continue;        
					do{
						do{
                		system("cls");
			        case 7: printf("  ============================================\n"
					               " |                     Pop                    |\n"
					               " |--------------------------------------------|\n"
					               " |                                            |\n"
			                       " | 1- Amor de Que - Pabllo Vittar             |\n"
			                       " |                                            |\n"
			                       " | 2- Meu Abrigo - Melim                      |\n"
			                       " |                                            |\n"
			                       " | 3- Inesquecível - Giulia Be e Luan Santana |\n"
			                       " |                                            |\n"
			                       " | 4- Lei da Vida - Sabrina Lopes             |\n"
			                       " |                                            |\n"
			                       " | 5- Ouvi Dizer - Melim                      |\n"
			                       " |                                            |\n"
			                       " | 0- Voltar                                  |\n"
								   " |                                            |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        					        		
			    			switch(musica){
								case 1: system("start \musicas./m66.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m67.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m68.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m69.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m70.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas pop
			        } while(musica!=0);
	    					continue;
			        do{
			        	do{
                		system("cls");		
			         case 8: printf("  ===================================================\n"
					                " |                     Eletrônica                    |\n"
					                " |---------------------------------------------------|\n"
					                " |                                                   |\n"
			                        " | 1- Hear Me Now - Alok, Bruno Martini feat. Zeeba  |\n"
			                        " |                                                   |\n"
			                        " | 2- Ocean Alok - Zeeba and IRO                     |\n"
			                        " |                                                   |\n"
			                        " | 3- Piece Of Your Heart - Alok ft. Goodboys Meduza |\n"
			                        " |                                                   |\n"
			                        " | 4- On & On - Alok & Dynoro.                       |\n"
			                        " |                                                   |\n"
			                        " | 5- Vale Vale - Alok & Zafrir.                     |\n"
			                        " |                                                   |\n"
			                        " | 0- Voltar                                         |\n"
								    " |                                                   |\n"
									" | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		if(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5)
					        		{
										system("cls");
										printf("\n  ================\n"
							               		" | Opção inválida |\n"
										   		"  ----------------\n");
										   		printf("\n\n");
						                        system("pause");
								    }
				    	} while(musica!=0 && musica!=1 && musica!=2 && musica!=3 && musica!=4 && musica!=5); 
			        					        		
			    			switch(musica){
								case 1: system("start \musicas./m71.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 2: system("start \musicas./m72.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 3: system("start \musicas./m73.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;	
			        			case 4: system("start \musicas./m74.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
								case 5: system("start \musicas./m75.mp3");
										system("cls");
										printf("\n  ===========\n"
												" | Tocando \x0e |\n"
												"  -----------\n");
										printf("\n\n");
						                system("pause"); 
						                continue;
			        	    } // fim do switch musicas eletronica
			       	} while(musica!=0);
	   						continue;       		
			    }// fim do switch generon           
    } while(generon != 0);
    			continue;
    			
		system("cls");
        case 3: printf( "  =============================\n"
						" |  Programa desenvolvido por: |\n"
						" |-----------------------------|\n"
                        " |                             |\n"
						" | Diogo Pereira Almeida       |\n"
						" |                             |\n"
                        " | Fernando Silva Martins      |\n"
                        " |                             |\n"
                        " | João Victor Rosa Tagliarini |\n\n\n");
				system("pause");
				continue;
				
		case 0: printf("\n  =================\n"
					   " | Muito obrigado! |\n"
					   "  -----------------\n");
				break;
		
        default:printf("\n  ================\n"
					   " | Opção inválida |\n"
					   "  ----------------\n");
				printf("\n\n");
				system("pause");
                break;
    }//fim do switch nacionalidade
} while(nacionalidade!=0);

    printf("\n\n");
    system("pause");
    return 0;
}//fim da main
