#include<emmintrin.h>
void saxpy(float x[], float y[], float a, int n)
{
   int i;
   __m128 vx,vy,vax;
   __m128 va = _mm_set_ps(a,a,a,a);

   for (i = 0; i < n; i+=4)
   {
      vx = _mm_load_ps(x+i);
      vax = _mm_mul_ps(va,vx); // a*x[i]
      vy = _mm_load_ps(y+i); 
      vy = _mm_add_ps(vax,vy); // a*x[i]+y[i]
      _mm_store_ps(y+i,vy);
   }
}

