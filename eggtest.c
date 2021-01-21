/*
RAVEN ANKLAM & RAJPREET JUDGE
PA 5 
NICK MACIAS
03/10/20
*/

#include"stuff.h"  // dont need stdio when you have stuff

int main () { //main program...this is like the gas pedel

  int floors, eggs; //floors and eggs are just names without declaring them

  printf("# of floors: "); //well time to ask the user for floors
  scanf("%d", &floors); //the dreaded scanf in the 200 level sequence 
  printf("# of eggs: "); //asking for eggs 
  scanf("%d", &eggs); //who needs an fgets or sscanf when you have scanf

  printf("Number of tries = %d\n",egg(floors, eggs)); //calling egg and printing tries

  return 0; //just a returny zero

}

int egg(int floors, int eggs) { //and this is the computer that tells the engine how much you pushed the pedel

  int smallestworst, worst; //smally and smallyer

  if(floors <= 0) { //base case
    return 0; //return 0 if the floors are 0 or less
  }
  if(floors == 1) { //bases cases
    return 1;  //if the floor is 1...then we shall return 1
  }
  if(eggs == 1) { //if we have 1 egg
    return floors; //well then we have to drop from each floor...get your legs ready
  }

  if(save[floors][eggs] > 0)  // "WHO DID THAT TO YOU?!?!?!"
    return (save[floors][eggs]);

  int f;   //int f well im almost 1000% sure you dont need this line commented...
  for(f = 1; f <= floors; f++) { //for loops of the for loops
    int poss1 = (1 + egg((f - 1), (eggs - 1))); //case 1 for looking at the bottom???? i think
    int poss2 = (1 + egg((floors - f), eggs)); //case 2 of upper part
   
    if(poss1 >= poss2)  //if case 1 is bigger then worst is poss1
      worst = poss1;

    if(poss2 >= poss1) //vice versa buddy
      worst = poss2;    
  
    if(f == 1)  //my comments are lacking for this program but its also the end of the quarter lol
      smallestworst = worst; //setting the smallestworst if the f was one

    save[floors][eggs] = smallestworst; //storing smallestworst int he arry

    if(worst < smallestworst) //seeing the worst is smaller or bigger
      smallestworst = worst;

  } 
  return (smallestworst); //returning the smallestworst
}
