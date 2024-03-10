// There is a song concert going to happen in the city.
// The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.

long reverseBits(long n) {
   long revBit=0;
   int i=0;
   while(i<32){
       revBit=(revBit<<1) | (n&1);
       n>>=1;
       i++;
   }
   return revBit;
}