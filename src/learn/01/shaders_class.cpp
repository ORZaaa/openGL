///**
//*┌──────────────────────────────────────────────────────────────┐
//*│　      Info:                                                     
//*│　    Author: Carl                                              
//*│　   Version: 1.0                                                 
//*│　Creat Time:                             
//*└──────────────────────────────────────────────────────────────┘
//*/
//
//
//
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//
//#include <shader_s.h>
//
//#include <iostream>
//#include <cmath>
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
//void processInput(GLFWwindow *window);
//
//// settings
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//
//int main() {
//
//	/**
//	* init GLFW window
//	*/
//	glfwInit();
//
//	// Choose openGL Version
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//
//	// Choose openGL Model: core
//	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//
//#ifdef __APPLE__
//	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
//#endif
//
//
//	/**
//	 * create window
//	 */
//	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
//	if (window == NULL)
//	{
//		std::cout << "Failed to create GLFW window" << std::endl;
//		glfwTerminate();
//		return -1;
//	}
//	glfwMakeContextCurrent(window);
//
//	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//	/**
//	 *  init GLAD
//	 */
//
//	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//	{
//		std::cout << "Failed to initialize GLAD" << std::endl;
//		return -1;
//	}
//
//	//-----------------------------------------------------------
//	/**
//	 *  build shader
//	 */
//	Shader ourShader("shaders/learn/3.3.shader.vs", "shaders/learn/3.3.shader.fs"); // you can name your shader files however you like
//
//
//	//------------------------------------------
//	/**
//	 *  Vertex data
//	 */
//	float vertices[] = {
//		// positions         // colors
//		 0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,  // bottom right
//		-0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  // bottom left
//		 0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f   // top 
//
//	};
//
//	// vertex buffer objects (VBO)  
//	// vertex array object (VAO)
//	unsigned int VBO, VAO;
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//
//	//
//	glBindVertexArray(VAO);
//
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//
//	// position attribute
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//
//	// color attribute
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
//	glEnableVertexAttribArray(1);
//
//	//glBindVertexArray(0);
//
//
//
//	//-------------------------------------
//	/**
//	 *  render loop
//	 */
//	while (!glfwWindowShouldClose(window))
//	{
//		// input
//		// -----
//		processInput(window);
//
//		// render
//		// -------
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//
//
//		// draw triangle
//		ourShader.use();
//		glBindVertexArray(VAO);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		// glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
//		// -------------------------------------------------------------------------------
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	// clean
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//
//	/**
//	 *  Exit
//	 */
//	glfwTerminate();
//	return 0;
//}
//
//
///**
// *  process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// */
//void processInput(GLFWwindow *window)
//{
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//		glfwSetWindowShouldClose(window, true);
//}
//
//
///**
// *  whenever the window size changed (by OS or user resize) this callback function executes
// */
//void framebuffer_size_callback(GLFWwindow* window, int width, int height)
//{
//	// make sure the viewport matches the new window dimensions; note that width and 
//	// height will be significantly larger than specified on retina displays.
//	glViewport(0, 0, width, height);
//}
