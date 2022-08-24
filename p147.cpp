#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#define NET BUF SIZE 32
#define cipherKey 'S'
#define sendrecvflag 0
#define nofile "File Not Found!"
// function to clear buffer
void c1earBuf(char *b)
{
    int i;
    for (i = 0; i < NET BUF SIZE; i++)
        b[i] = '\0';
}

// function to encrypt
char Cipher(char ch)
{
    return ch ^ cipherKey;
}
// function sending file
int sendFile(FILE *fp, char *buf, int s)
{
    int i, len;
    if (fp == NULL)
( strcpy(buf, nofile); 
len = strlen(nofile); 
buf[1en] = EOF;
for (i = 0; i <= len; i++) 
buf[i] = Cipher(buf[i]); 
return 1;
}

char ch, ch2;
for (i = 0; i < s; i++)
{
    ch = fgetc(fp);
    ch2 = Cipher(ch);
    buf[i] — ch2;
    if (ch == EOF)
        return 1;
}

return 0;
}
// driver code int main()

int sockfd, nBytes;
struct sockaddr in addr con;
int addrlen = sizeof(addr con);
addr_con.sin_family = AF_INET;

addr con.sin_port = htons(PORT NO);
addr_con.sin addr.s addr = INADDR_ANY;
char net buf[NET_BUF_SIZE];
FILE *fp;
// send
sendto(sockfd, net_buf, NET_BUF_SIZE, sendrecvflag,
       (struct sockaddr *)&addr_con, addrlen);
clearBuf(net_buf);

if (fp != NULL)
    fclose(fp);
return 0;

// client code for UDP socket programming #include <arpa/inet.h>
#inc1ude < netinet / in.h>
#inc1ude < stdio.h>
#include <stdlib.h>
#define IP PROTOCOL 0
#define IP ADDRESS "127.0.0.1" // localhost #define PORT NO 15050
#define NET BUF SIZE 32
#define cipherKey 'S'
#define sendrecvflag 0
// function to clear buffer void clearBuf(char* b)
int i;
for (i = 0; i < NET BUF SIZE; i++)
    b[i] = '\0';

// function for decryption char
Cipher(char ch)
{
    return ch ^ cipherKey;
}
// function to receive file
int recvFile(char *buf, int s)
{

    int i;
    char ch;
    for (i = 0; i < s; i++)
    {ch = buf[iI:
ch = Cipher(ch);
if(ch == EOF) 
return 1;
else
printf("%c", ch);
    }
    return 0;
}