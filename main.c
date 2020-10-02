/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Angel F. Garcia (9/19/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  // TODO: Complete the rest of the categories
  if(s < d){
    printf("Error");
  }
  else if((s < 120) && (d < 80)){
    printf("Normal");
  }
  else if(((s >= 120) && (s <= 129)) && (d < 80)){
    printf("Elevated");
  }
  else if(((s >= 130) && (s <= 139)) || ((d >= 80) && (d <= 89))){
    printf("Stage 1 Hypertension");
  }
  else if(((s > 140) && (s <= 180)) || ((d > 90) && (d < 121))){
    printf("Stage 2 Hypertension");
  }
  else{
    printf("Hypertensive Crysis");
  }
}
