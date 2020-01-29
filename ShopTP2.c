#include <stdio.h>
#include <string.h>

struct Shop{

	char name[20];
	int id;
	int price;
	int category;
};

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
void main() {
	printf("Objets dans le Shop :\n\n");
	stock();
	printf("ID of the item you want to buy :\n",);

}
