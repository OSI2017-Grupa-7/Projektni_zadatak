#include "Logo.h"
#include <windows.h>

void logoL() {
	SetColor(2);
	std::cout << R"(
 ______               __            ______        __            ___      
/\__  _\             /\ \          /\__  _\      /\ \__        /\_ \     
\/_/\ \/ __  __  _ __\ \ \____   __\/_/\ \/   ___\ \ ,_\    __ \//\ \    
   \ \ \/\ \/\ \/\`'__\ \ '__`\ / __`\\ \ \  / __`\ \ \/  /'__`\ \ \ \   
    \ \ \ \ \_\ \ \ \/ \ \ \L\ /\ \L\ \\ \ \/\ \L\ \ \ \_/\ \L\.\_\_\ \_ 
     \ \_\ \____/\ \_\  \ \_,__\ \____/ \ \_\ \____/\ \__\ \__/.\_/\____\
      \/_/\/___/  \/_/   \/___/ \/___/   \/_/\/___/_ \/__/\/__/\/_\/____/
                       /'___`\  /'__`\  /'__`\  /'__`\                   
                      /\_\ /\ \/\ \/\ \/\ \/\ \/\ \/\ \                  
                      \/_/// /_\ \ \ \ \ \ \ \ \ \ \ \ \                 
                         // /_\ \ \ \_\ \ \ \_\ \ \ \_\ \                
                        /\______/\ \____/\ \____/\ \____/                
                        \/_____/  \/___/  \/___/  \/___/                                                                                                                                                                                                                                                                                                                                                                                                                  
)";
	SetColor(15);
}

void logoS() {
	SetColor(2);
	std::cout << R"(
	 ______         __          ______     __       __  ___  ___  ___  ___ 
	/_  __/_ ______/ /  ___    /_  __/__  / /____ _/ / |_  |/ _ \/ _ \/ _ \
	 / / / // / __/ _ \/ _ \    / / / _ \/ __/ _ `/ / / __// // / // / // /
	/_/  \_,_/_/ /_.__/\___/   /_/  \___/\__/\_,_/_/ /____/\___/\___/\___/ 
                                                                       
                                                                                    )";
	SetColor(15);
}

void SetColor(int n) {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, n);
}

void startLogo()
{
	SetColor(2);
	std::cout << R"( 

          






	                                                                                                                              
					                           @@@@@@@@@@@@@@@@@@@@@@@@@@@/     @@@@@@@,                                                   
					                          (@@@@@@@@@@@@@@@@@@@@@@@@@@@.    .@@@@@@@                                                    
					                          &@@@@@@@@@@@@@@@@@@@@@@@@@@@     %@@@@@@#                                                    
					                                   .@@@@@@@.               @@@@@@@                                                     
					                                   %@@@@@@@               /@@@@@@@                                                     
					                                   @@@@@@@*               @@@@@@@#                                                     
					                                  .@@@@@@@               ,@@@@@@@                                                      
					                                  %@@@@@@@               &@@@@@@&                                                      
					                                  @@@@@@@*               @@@@@@@,                                                      
					                                 (@@@@@@@               #@@@@@@@                                                       
					                                 @@@@@@@#               @@@@@@@(                                                       
					                                .@@@@@@@               ,@@@@@@@                                                        
					                                &@@@@@@&               @@@@@@@%                                                        
					                                @@@@@@@,               @@@@@@@.                                                        
					                               (@@@@@@@               %@@@@@@@                                                         
					                               @@@@@@@/     @@@@@@@@@@@@@@@@@@@@@@@@@@@*                                               
					                              ,@@@@@@@     %@@@@@@@@@@@@@@@@@@@@@@@@@@@,                                               
					                              &@@@@@@%     @@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                
                                                                                                                       
	                                                                                                                       
	                                                                                                                       
					                   @@@@@@@@@@      @@@@@@@@@&     *@@@@@@@@@      @@@@@@@@@/                                           
					                  &@@%,*@@@@@%   .@@@@   (@@@#   @@@@(  ,@@@@   /@@@&   @@@@,                                          
					                         @@@@(   @@@%     @@@@  @@@@     &@@@  *@@@*    /@@@(                                          
					                        @@@@@   @@@@      @@@% *@@@*     @@@@  @@@%     %@@@*                                          
					                      .@@@@#   *@@@*     /@@@, @@@@     .@@@% %@@@      @@@@                                           
					                    .@@@@%     &@@@      @@@@ .@@@#     %@@@  @@@@      @@@%                                           
					                  &@@@@.       @@@@     %@@@. *@@@,    *@@@&  @@@@     @@@@                                            
					                &@@@@          &@@@.   &@@@.  .@@@&   (@@@&   @@@@    @@@@                                             
					               @@@@@@@@@@@@@    @@@@@@@@@@     /@@@@@@@@@,    .@@@@@@@@@#                                              
					                                   ,,,            .,,,            ,,,                                                  
                                                                                                                       
                                                                                                                       
                                 
                                                                                    )";
	SetColor(15);
}

void timer(int sec)
{
	Sleep(sec * 1000);
}


