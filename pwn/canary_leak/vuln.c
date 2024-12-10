#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void getUsername() {

    char username[128];

    puts("What is your username?");
    read(0, &username, 0x7f);

    printf(username);

}


void getMessage() {

    char message[64];

    puts("What is your message?");
    read(0, &message, 0x100);
}


int main() {

    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    getUsername();
    getMessage();

}
