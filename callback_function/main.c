#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void echo_handler(void);
void help_handler(void);
void exit_handler(void);

typedef struct {
	char cmd_name[30];
	void (* command_handler)(void); //function pointer
} command_list_t;

command_list_t cmd_list[] = {
	{.cmd_name = "echo", .command_handler = echo_handler},
	{.cmd_name = "help", .command_handler = help_handler},
	{.cmd_name = "exit", .command_handler = exit_handler}
};

void echo_handler(void)
{
	printf("hello\n");
}

void help_handler(void)
{
	printf("A fairly simple terminal written by me.\n"
               "support command: echo, help, exit.\n");
}

void not_found_handler(char *s)
{
	printf("%s: command not found\n", s);
}

void exit_handler(void)
{
	exit(0);
}

int main(void)
{
	char buf[1000];
	char c;
	int ptr = 0;

	char *user_name = "shengwen";
	char *domain_name = "my_pc";

	printf("%s@%s:$ ", user_name, domain_name);

	while(1) {
		c = getchar();

		if(c == '\n') {
			buf[ptr] = 0;

			bool not_found = true;

			int cmd_count = sizeof(cmd_list) / sizeof(command_list_t);
			int i;
			for(i = 0; i < cmd_count; i++) {
				if(strcmp(buf, cmd_list[i].cmd_name) == 0) {
					cmd_list[i].command_handler();
					not_found = false;
					break;
				}
			}

			if(not_found == true) {
				not_found_handler(buf);
			}

			ptr = 0;

			printf("%s@%s:$ ", user_name, domain_name);

			continue;
		}

		buf[ptr] = c;
		ptr++;
	}
}
