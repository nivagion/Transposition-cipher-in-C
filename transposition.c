#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

#include <stdint.h>
#include <ctype.h>
#include <string.h>

int main() {
	char plain[1024];

	char whatToDo;

	printf("encrypt(e) / decrypt(d)\n");
	scanf("%c\n",&whatToDo);
	gets(plain);

	int rando[]={3,2,0,4,1};
	int n=5;
	int m=strlen(plain)/n;
	if(strlen(plain)%n!=0)m++;
	char a[m][n];
	char nova[m][n];
	if(whatToDo=='e'){
		bool kraj=false;
		for(int i=0,b=0;i<m;i++){
		    for(int j=0;j<n;j++){
		    	if(kraj==false){
		    		a[i][j]=plain[b];
		        	b++;
		    	}
		    	else{
		    		a[i][j]='x';
		    	}
		        if(b>=strlen(plain)){
		        	kraj=true;
		        }
		    }
		}
		for(int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        nova[i][rando[j]]=a[i][j];
		    }
		}
		for(int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        printf("%c",nova[i][j]);
		    }
		}

	}
	else if(whatToDo=='d'){
		for(int i=0,b=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        nova[i][j]=plain[b];
		        b++;
		    }
		}
		for(int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        a[i][j]=nova[i][rando[j]];
		    }
		}
		for(int i=0;i<m;i++){
		    for(int j=0;j<n;j++){
		        printf("%c",a[i][j]);
		    }
		}

	}

    return 0;
} 
