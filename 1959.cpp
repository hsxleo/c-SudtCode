#include <stdio.h>
#include <string.h>

int main()
{
    char color[31];
    while(gets(color)!=NULL)
    {
        if(strcmp(color,"red")==0)
            printf("Rose are red.\n");
        else if(strcmp(color,"orange")==0)
            printf("Poppies are orange.\n");
        else if(strcmp(color,"yellow")==0)
            printf("Sunflower are yellow.\n");
        else if(strcmp(color,"green")==0)
            printf("Grass are green.\n");
        else if(strcmp(color,"blue")==0)
            printf("Bluebells are blue.\n");
        else if(strcmp(color,"violet")==0)
            printf("Violets are violet.\n");
        else
            printf("I don't know about the color %s.\n",color);
    }
    return 0;
}
