/*
 *
 *   Title of project : 
 *   Date of creation : 
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 * 
 *   More on the project :
 *   
 *   #TODO(s) :  
 * 
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int main()
{
	int u, v ,lcm;

	printf("Enter the value for u and v : \n");
	scanf(" %d %d",&u ,&v);

	lcm = u*v;
	int min = (u < v ? u : v);

	while(lcm != 0){

		if ( lcm % u == 0 && lcm % v == 0){
			break;
		}
		lcm -= min;
	}

	if(lcm != 0){
		printf("The lcm for %d and %d is %d\n",u,v,lcm);
	}	

return EXIT_SUCCESS;
}