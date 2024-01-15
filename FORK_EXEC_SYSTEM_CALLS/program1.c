
void main(void){
    int i, pid;
    pid = fork();
    if(pid==0){
        execlp("./program2","program2","3", NULL);
    }
    for(int i=0; i<4;i++){
        printf("parent\n");
    }

    
}