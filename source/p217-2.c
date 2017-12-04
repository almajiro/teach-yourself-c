#include <stdio.h>
#include <string.h>
#include <almajiro.h>

#define MAX 100

int menu(void);
void display(int id);
void enter(void);
void search_title(void);
void search_author(void);

char title[MAX][80];
char author[MAX][80];
char publisher[MAX][80];

int top = 0;

int main(void)
{
	int choice;

	do{
		choice = menu();

		switch(choice){
			case 1:
				enter();
				break;
			case 2:
				search_author();
				break;
			case 3:
				search_title();
				break;
		}

	}while(choice != 4);

	return 0;
}

int menu(void)
{
	int choice;

	puts("カードカタログ");
	puts("1. 入力");
	puts("2. 著者による検索");
	puts("3. 書名による検索");
	puts("4. 終了");

	do{
		printf("どれかを選択しなさい: ");
		choice = getche() - '0';
	}while(choice > 4 || 0 > choice);

	puts("");
	return choice;
}

void enter(void)
{
	int i;
	for(i=top; i<MAX; i++){
		printf("本の名前 [%d] (終了する場合そのまま改行): ", i+1);
		gets(title[i]);
		if(!*title[i]) break;
		printf("著者: ");
		gets(author[i]);
		printf("出版社: ");
		gets(publisher[i]);
	}
	top = i;
}

void search_title(void)
{
	char book_title[80];
	int i, id, flag = 0;

	printf("検索する本の名前: ");
	gets(book_title);

	for(i=0; i<top; i++){
		if(!strcmp(title[i], book_title)){
				id = i;
				flag = 1;
				break;
		}
	}

	if(flag) display(id);
	else puts("該当する本が見つかりませんでした。");
}

void search_author(void)
{
	char author_name[80];
	int i, flag = 1;

	printf("検索する著者の名前: ");
	gets(author_name);

	for(i=0; i<top; i++){
		if(!strcmp(author[i], author_name)){
				flag = 0;
				display(i);
		}
	}

	if(flag) puts("該当する著作がありませんでした。");

}

void display(int id)
{
	puts("-------------------------------");
	printf("本の名前: %s\n", title[id]);
	printf("著者: %s\n", author[id]);
	printf("出版社: %s\n", publisher[id]);
	puts("-------------------------------");
}
