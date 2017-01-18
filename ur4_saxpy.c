void saxpy(float x[], float y[], float a, int n)
{
   int i;/*
   for (i = 0; i < n%4; i++)
   {
      y[i]   += a*x[i]   + y[i];
   }*/
   for (i = 0; i < n; i+=4)
   {
      y[i]   = a*x[i]   + y[i];
      y[i+1] = a*x[i+1] + y[i+1];
      y[i+2] = a*x[i+2] + y[i+2];
      y[i+3] = a*x[i+3] + y[i+3];
   }
}

