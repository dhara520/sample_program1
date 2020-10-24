#include<GL/glut.h>
void display() /* callback function which is called when OpenGL needs to update the display */
{
	glClearColor(1.0, 1.0, 0.0, 0.0);/*default color –black…….. Now set to YELLOW */
	glClear(GL_COLOR_BUFFER_BIT);/*Clear the window-set the color of pixels in buffer*/
	glFlush(); /* Force update of screen */
}
void main(int argc, char** argv)
{
	glutInit(&argc, argv); /* Initialise OpenGL */
	glutCreateWindow("Example1"); /* Create the window */
	glutDisplayFunc(display); /* Register the "display" function */
	glutMainLoop(); /* Enter the OpenGL main loop */
}
