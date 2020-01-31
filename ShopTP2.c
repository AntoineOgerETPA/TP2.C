#include <stdio.h>
#include <string.h>

struct Shop{

	char name[20];
	int id;
	int price;
	int category;
};
struct Inventory{

	char name[20];
	int amount;
};

typedef struct Inventory inventory;

void Inventory(){
	inventory Spear = {"Spear",0};
	inventory Shield = {"Shield",0};
	inventory Katana = {"Katana",0};
	inventory Water = {"Water",0};
	inventory Food = {"Food",0};
	inventory CheatCode = {"CheatCode",0};

	//Spear :
		printf("Name : %s\n", Spear.name);
		printf("Amount : %d\n", Spear.amount);
	//Shield :
		printf("Name : %s\n", Shield.name);
		printf("Amount : %d\n", Shield.amount);
	//Katana :
		printf("Name : %s\n", Katana.name);
		printf("Amount : %d\n", Katana.amount);
	//Water :
		printf("Name : %s\n", Water.name);
		printf("Amount : %d\n", Water.amount);
	//Food :
		printf("Name : %s\n", Food.name);
		printf("Amount : %d\n", Food.amount);
	//CheatCode :
		printf("Name : %s\n", CheatCode.name);
		printf("Amount : %d\n", CheatCode.amount);
}

typedef struct Shop shop;

	void stock(){
	shop Spear = {"Spear",1,150,1};
	shop Shield = {"Shield",2,250,1};
	shop Katana = {"Katana",3,500,1};
	shop Water = {"Water",4,50,2};
	shop Food = {"Food",5,50,2};
	shop CheatCode = {"CheatCode",6,9999999,3};

		//Spear :
			printf("Name : %s\n", Spear.name);
			printf("ID : %d\n", Spear.id);
			printf("Price : %d\n", Spear.price);
			printf("Category : %d\n\n", Spear.category);
		//Shield :
			printf("Name : %s\n", Shield.name);
			printf("ID : %d\n", Shield.id);
			printf("Price : %d\n", Shield.price);
			printf("Category : %d\n\n", Shield.category);
		//Katana :
			printf("Name : %s\n", Katana.name);
			printf("ID : %d\n", Katana.id);
			printf("Price : %d\n", Katana.price);
			printf("Category : %d\n\n", Katana.category);
		//Water :
			printf("Name : %s\n", Water.name);
			printf("ID : %d\n", Water.id);
			printf("Price : %d\n", Water.price);
			printf("Category : %d\n\n", Water.category);
		//Food :
			printf("Name : %s\n", Food.name);
			printf("ID : %d\n", Food.id);
			printf("Price : %d\n", Food.price);
			printf("Category : %d\n\n", Food.category);
		//CheatCode :
			printf("Name : %s\n", CheatCode.name);
			printf("ID : %d\n", CheatCode.id);
			printf("Price : %d\n", CheatCode.price);
			printf("Category : %d\n\n", CheatCode.category);

}
void degats (shop * buy) {
	(*buy).price = (*buy).price;
}
int main() {
		int choixJoueur = 0;
	  char answer;
		int gold = 10000;


	printf("Objects in the Shop :\n\n");
	stock();
	printf("Inventory : enter 9\n\n");
	printf("ID of the item you want to buy :\n");
	scanf("%d", &choixJoueur);

if (gold <= 0){
	printf("no more Gold\n");
}

	if (choixJoueur == 1){
	    printf("\nDo you want to buy a Spear ?\n[Y] OR [N]\n");
			scanf("%c\n");
	    printf("Success!\n");
	        printf("Gold - 150$\n", gold -= 150 );
					printf("Your Gold : %d$\n",gold);
					Spear.amount + 1;
				}
			if (choixJoueur == 2){
			    printf("\nDo you want to buy a Shield ?\n[Y] OR [N]\n");
					scanf("%c\n");
			    printf("Success!\n");
			        printf("Gold - 150$\n", gold -= 250 );
							printf("Your Gold : %d$\n",gold);
						}
					if (choixJoueur == 3){
					    printf("\nDo you want to buy a Katana ?\n[Y] OR [N]\n");
							scanf("%c\n");
					    printf("Success!\n");
					        printf("Gold - 150$\n", gold -= 500 );
									printf("Your Gold : %d$\n",gold);
								}
						if (choixJoueur == 4){
							    printf("\nDo you want to buy a Water ?\n[Y] OR [N]\n");
									scanf("%c\n");
							    printf("Success!\n");
							        printf("Gold - 150$\n", gold -= 50 );
											printf("Your Gold : %d$\n",gold);
										}
									if (choixJoueur == 5){
									    printf("\nDo you want to buy some Food ?\n[Y] OR [N]\n");
											scanf("%c\n");
									    printf("Success!\n");
									        printf("Gold - 150$\n", gold -= 50 );
													printf("Your Gold : %d$\n",gold);
												}
											if (choixJoueur == 6){
											    printf("\nDo you want to buy a CheatCode ?\n[Y] OR [N]\n");
													scanf("%c\n");
											    printf("Sorry you don't have enough Gold...\n");
														}
													if (choixJoueur == 9){
													    printf("\nInvetory :\n");
															Inventory();


																}
															}
