#include "Graph.h"
using namespace std;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	glutInit(&argc, argv);

	graph = makeGraph();

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(900, 700);
	glutCreateWindow("Graph");
	WinW = glutGet(GLUT_WINDOW_WIDTH);
	WinH = glutGet(GLUT_WINDOW_HEIGHT);
	for (int i = 2; i < 2 + rand() % 5;i++)
	{
		Circle c(rand() % int(WinW) - WinW / 2, rand() % int(WinH) - WinH / 2, rand() % 20 + 2);
		circ.push_back(c);
	}
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutTimerFunc(40, Timer, 0);
	glutTimerFunc(80, Timer2, 0);
	glutMouseFunc(mouse);
	glutMainLoop();

	return 0;
}