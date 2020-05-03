#include <GL/glut.h>
#include <math.h> 
#include <time.h>
#include <cstdlib>
#define PI 3.14159265

void display() {
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glRotatef(15, 1, 1, 0);
	glutWireOctahedron();
	glFlush();
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Ex 6");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}