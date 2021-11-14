#include "DoubleData.h" 
 
DoubleData::DoubleData(double data){ 
 m_data = data; 
} 
DoubleData::~DoubleData(){} 
 
void DoubleData::print() 
{ 
 printf("%d\n", m_data); 
}
