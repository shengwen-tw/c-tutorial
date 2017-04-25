#include <stdio.h>
#include <string.h>

#define CMD_STR_MAX_LEN 16

#define COMMAND_DEF(cmd) {.cmd_str = #cmd, .func = cmd ## _handler}

void hello_handler(void);
void test_handler(void);

enum {
	hello,
	test,
	CMD_LEN
};

typedef struct {
	char cmd_str[CMD_STR_MAX_LEN];
	void (* func)(void);
} command_t; 

command_t command_list[] = {
	COMMAND_DEF(hello),
	COMMAND_DEF(test)
}; 

void hello_handler(void)
{
	printf("Trigger \"hello\" command\n");
}

void test_handler(void)
{
	printf("Trigger \"test\" command\n");
}

int main(void)
{
	char *command = "test";

	int i;
	for(i = 0; i < CMD_LEN; i++) {
		if(strcmp(command, command_list[i].cmd_str) == 0) {
			command_list[i].func();

			break;
		}
	}

	return 0;
}
