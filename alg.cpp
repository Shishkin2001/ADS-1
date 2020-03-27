int cbinsearch(int *arr, int size, int value)
{
  int l  = 0;
  int r = size - 1;
  int k = 0;
  int i = 0;
  
  while(l<=r)
  {
    int m = (l + r)/2;
    if (value > arr[m]) l = m;
    if (value < arr[m]) r = m;
    if (value == arr[m])
    {
      k = m;
      i++;
      break;
    }
  }
  while(value == arr[k])
  {
  k++;
  if (value == arr[k]) i++;
  }
  while(value == arr[k])
  {
  k--;
  if (value == arr[k]) i++;
  }
  return i;
}
