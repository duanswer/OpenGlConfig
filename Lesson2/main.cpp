#include<stdio.h>
#include<string.h>
#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include <stdlib.h>




//Window dimensions
const GLint WIDTH = 800, HEIGHT = 600;


void CreateTriangle()
{
	GLfloat vertices[] = {
		-1.0f, -1.0f, 0.0f,
		1.0f, -1.0f, 0.0f,
		0.0f, 1.0f, 0.0f
	};

	
}

int main()
{
	//Inicialização do GLFW
	if (!glfwInit())
	{
		printf("Erro ao criar GLFW");
		glfwTerminate();
		return 1;
	}

	//Configuração das propriedades da janela do GLFW
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	//Perfil principal
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

	//Criação da janela
	GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Janela de Teste", NULL, NULL);
	if (!mainWindow)
	{
		printf("Erro ao criar a janela");
		glfwTerminate();
		return 1;
	}

	//Obter informações do Buffer
	int bufferWidth, bufferHeight;
	glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);
	
	//Configuração do contexto do GLEW
	glfwMakeContextCurrent(mainWindow);

	//Permitir caracteristicas de estensões modernas
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
	{
		printf("Falha ao inicializar o GLEW");
		glfwDestroyWindow(mainWindow);
		return 1;
	}

	//Configurar Janela de Exibição
	glViewport(0, 0, bufferWidth, bufferHeight);

	//Criar Loop até o fechamento da janela
	while (!glfwWindowShouldClose(mainWindow))
	{
		glfwPollEvents();

		//Aapagar a janela
		//glClearColor(1.0f, 0.0f, 0.0f, 1.0f); //Cor vermelha
		//glClearColor(0.0f, 1.0f, 0.0f, 1.0f); //Cor verde
		//glClearColor(0.0f, 0.0f, 0.0f, 1.0f); //Cor preta
		glClearColor(0.0f, 0.0f, 1.0f, 1.0f); //Cor azul
		//glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //Cor branca
		glClear(GL_COLOR_BUFFER_BIT);


		glfwSwapBuffers(mainWindow);

	}

	/*
	organização*/
	int f = 2;
	return 0;
}