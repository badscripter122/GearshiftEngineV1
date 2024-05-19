#include <GLFW/glfw3.h>
#include <iostream>

int main() {
	std::cout << "  #####  #######    #    ######   #####  #     # ### ####### #######    ####### #     #  #####  ### #     # ####### \n#     # #         # #   #     # #     # #     #  #  #          #       #       ##    # #     #  #  ##    # #  \n#       #        #   #  #     # #       #     #  #  #          #       #       # #   # #        #  # #   # #      \n#  #### #####   #     # ######   #####  #######  #  #####      #       #####   #  #  # #  ####  #  #  #  # ##### \n#     # #       ####### #   #         # #     #  #  #          #       #       #   # # #     #  #  #   # # #    \n#     # #       #     # #    #  #     # #     #  #  #          #       #       #    ## #     #  #  #    ## #     \n #####  ####### #     # #     #  #####  #     # ### #          #       ####### #     #  #####  ### #     # #######\n\n\n\n\n";
	std::cout << "LOADING WINDOW\n\n\n";
	int glfw = glfwInit();

	if (glfw == 0) {
		std::cout << "GLFW INIT FAILED\n\n\n";
		return -1;
	}
	else if(glfw == 1){
		std::cout << "GLFW INIT DONE\n\n\n";
	}
	GLFWwindow* window = glfwCreateWindow(720, 820,"Gearshift Engine", nullptr, nullptr);

	std::cout << "Window loop starting...\n\n\n\n";

	

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}


	std::cout << "DESTROYING WINDOW\n\n";
	glfwDestroyWindow(window);
	std::cout << "TERMINATE GLFW\n\n";
	glfwTerminate();

	std::cout << "PRESS ENTER TO CONTINE\n\n\n";

	std::cin.get();
}