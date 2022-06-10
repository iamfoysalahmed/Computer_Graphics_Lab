#include <math.h>
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
    glClearColor(1,0,0,0.0f);
    glOrtho(-70,70,-70,70,-70,70);


}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,1);
    int x2=10, x1=5, y2=5,y1=0;
    for (int i=0; i<15; i++){
        if(i%2==0){
            glColor3ub(255,255,255);
        }else{
            glColor3ub(0,0,0);
        }
        glRectf(x1,y1,x2,y2);
        x1=x1+5;
        y1=y1+5;
        x2=x2+5;
        y2=y2+5;
    }

    glFlush();

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(50,50);
    glutCreateWindow("191-15-12486");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
