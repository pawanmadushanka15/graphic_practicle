#include <windows.h>
#include <glut.h>

void init()
{
	glClearColor (1.0, 1.0, 1.0, 1.0);

	glColor3f(0.0, 0.0, 1.0); 

	glMatrixMode (GL_PROJECTION);    
	glLoadIdentity ();    
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);  
}


void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glBegin(GL_POLYGON);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.5, -0.5);    
	glEnd();
	glFlush(); 
}
void mydisplay2(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glPointSize(10.0f);
	glBegin(GL_POINTS);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.5, -0.5);    
	glEnd();
	glFlush(); 
}
void mydisplay3(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);
	glBegin(GL_LINES);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.25, -0.75);    
	glEnd();
	glFlush(); 
}
void mydisplay4(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);        
		glVertex2f(-0.5, -0.5);        
		glVertex2f(-0.5, 0.5);        
		glVertex2f(0.5, 0.5);        
		glVertex2f(0.25, -0.75);    
	glEnd();
	glFlush(); 
}

void mydisplay5(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLES);        
		glVertex2f(0.0, -0.5);        
		glVertex2f(0.5, 0);        
		glVertex2f(0, 0.5);        
		   
	glEnd();
	glFlush(); 
}

void mydisplay6(){
    glClear(GL_COLOR_BUFFER_BIT); 
	glLineWidth(3.0f);
	glBegin(GL_TRIANGLES); 
		glColor3f(1.0f, 0.0f, 0.0f);
		glVertex2f(0.0, -0.75); 

		glColor3f(0.0f, 1.0f, 0.0f);
		glVertex2f(0.75, 0.5);

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-0.75, 0.5);

		glColor3f(0.0f, 0.0f, 1.0f);
		glVertex2f(-0.75, -0.5); 

		glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(0.75, -0.5); 

		glColor3f(0.0f, 1.0f, 1.0f);
		glVertex2f(0, 0.75); 
		   
	glEnd();
	glFlush(); 
}

void mydisplay7()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    // Triangle 1
    glColor3f(1,0,0);
    glVertex2f(0,0);
    glVertex2f(0,-0.8);
    glVertex2f(0.6,-0.4);

    // Triangle 2
    glColor3f(0,0,1);
    glVertex2f(0,0);
    glVertex2f(0.6,-0.4);
    glVertex2f(0.8,0);

    // Triangle 3
    glColor3f(0,1,0);
    glVertex2f(0,0);
    glVertex2f(0.8,0);
    glVertex2f(0.6,0.4);

    // Triangle 4
    glColor3f(0,0,1);
    glVertex2f(0,0);
    glVertex2f(0.6,0.4);
    glVertex2f(0,0.8);

    // Triangle 5
    glColor3f(0,1,0);
    glVertex2f(0,0);
    glVertex2f(0,0.8);
    glVertex2f(-0.6,0.4);

    // Triangle 6
    glColor3f(0,0,1);
    glVertex2f(0,0);
    glVertex2f(-0.6,0.4);
    glVertex2f(-0.8,0);

    // Triangle 7
    glColor3f(1,0,0);
    glVertex2f(0,0);
    glVertex2f(-0.8,0);
    glVertex2f(-0.6,-0.4);

    // Triangle 8
    glColor3f(0,1,0);
    glVertex2f(0,0);
    glVertex2f(-0.6,-0.4);
    glVertex2f(0,-0.8);

    glEnd();

    glFlush();
}



int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowSize(800,800);
	glutInitWindowPosition(0,0);
	glutCreateWindow("simple");     
	glutDisplayFunc(mydisplay7);  
	init();  
	glutMainLoop();
}