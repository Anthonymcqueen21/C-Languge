template<bool digit1>

int reversed_binary_value(){return digit1;}

template<bool digit1, bool digit2, bool...digits>
int reversed_binary_value(){return reversed_binary_value<digit2,digits...>()*2+digit1;}
