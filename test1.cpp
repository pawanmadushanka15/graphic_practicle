#include <windows.h>
#include <glut.h>

void init()
{
	glClearColor (0.0, 0.0, 0.0, 1.0);

	glColor3f(0.0, 0.0, 0.0); 

	glMatrixMode (GL_PROJECTION);    
	glLoadIdentity ();    
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);  
}


void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 0.0f, 1.0f); // Blue
      glVertex2f(0, 0.75);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.45, 0.45);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(0.45, 0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.75, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // red
      glVertex2f(0.45, -0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.75, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 0.0f, 1.0f); // blue
      glVertex2f(0.45, -0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.0, -0.75);
	glEnd();


	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 1.0f, 0.0f); // green
      glVertex2f(0, 0.75);
      glVertex2f(0.0, 0.0);
      glVertex2f(-0.45, 0.45);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(1.0f, 0.0f, 0.0f); // red
      glVertex2f(-0.45, 0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(-0.75, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 0.0f, 1.0f); // blue
      glVertex2f(-0.45, -0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(-0.75, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);          // Each set of 3 vertices form a triangle
      glColor3f(0.0f, 1.0f, 0.0f); // Green
      glVertex2f(-0.45, -0.45);
      glVertex2f(0.0, 0.0);
      glVertex2f(0.0, -0.75);
	glEnd();


	glFlush(); 
}


int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("simple");     
	glutDisplayFunc(mydisplay);  
	init();  
	glutMainLoop();
}
