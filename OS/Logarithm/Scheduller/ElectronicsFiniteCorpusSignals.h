
//#include "SecuringMedicalDatas/SimulationModels/LatentVariables.hlsl"

//NOT FINISHED
//Notice that we consider that electronics always send datas everytime.
//Here, we used physics, this is GREAT ! But not finished.
void sendMessageToAllDevices( char* message)
{
  //there are slight differences on sending message between this function and the function below.
  //The main reason is that we have to transform it into physics. The second reason is that
  //h=h*exp(h)  was muted. Then it is best to take an exponant of 9 like in the naigator1.h file
  //that contains notes. So we have 
  //Notice that RK4 is not enough now but we used two models. We already know that exponant 9 latent variables
  //will be hard to compute. So, baiscally, we have to call RK4 with a while loop. I hope this will be enough.
  //On the other hand, we didn't tell that we use simulation or arcade models like in game design. But as we used AI before,
  //we can use AI later if we use AI now on that models ! So, we have to get an isomorphism of RK4 into a whiile loop 
  //or call the while loop several times ! So, let's increase the exponent 9 to exponent 62 (it seems we delete the comma
  //of planck constant to add it after the number before the first comma.
  //h=h*exp(h)
  //linked_RK4_IncompleteAutomorphDtas_with_twoModels(....)

  while( ... )
    {
      muted_exponent_62_linked_RK4_IncompleteAutomorphDtas_with_twoModels(message);
    }

  
}


