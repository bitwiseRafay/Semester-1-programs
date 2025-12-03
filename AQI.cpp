#include <iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter your location to check Air Quality index :";
    getline(cin, str); // this will include spaces
    if (str == "Model Town") {
        cout << "AQI of Model town is 66" << endl
             << "Poor" << endl
             << "The air has reached a high level of pollution and is unhealthy for sensitive groups. Reduce time spent outside if you are feeling symptoms such as difficulty breathing or throat irritation.";
    }
    else if (str == "Johar Town") {
        cout << "AQI of Johar Town is 133\n"
             << "Unhealthy for Sensitive Groups.\n"
             << "People with asthma, children, and the elderly may feel breathing issues or irritation.\n"
             << "Healthy people are usually fine but should avoid long outdoor activities.\n"
             << "Best to stay indoors, keep windows closed, and wear a mask if going outside.";
    }
    else if(str=="Shahdara"){
         cout << "AQI of Shahdara is 133\n"
             << "Poor\n"
             << "The air has reached a high level of pollution and is unhealthy for sensitive groups. Reduce time spent outside if you are feeling symptoms such as difficulty breathing or throat irritation.";
    }
    else if(str=="UET"){
         cout << "AQI of UET is 71\n"
         <<"The air quality is acceptable, but there may be a slight health concern for people who are unusually sensitive to air pollution.";
    }
    else if (str == "Defence Phase I") {
        cout << "AQI of Defence Phase I is 133\n"
             << "Unhealthy for Sensitive Groups.\n"
             << "People with asthma, children, and the elderly may feel breathing issues or irritation.\n"
             << "Healthy people are usually fine but should avoid long outdoor activities.\n"
             << "Best to stay indoors, keep windows closed, and wear a mask if going outside.";}
     else if (str == "Bharia Town") {            
        cout << "AQI of Bharia Town is 133\n"
             << "Unhealthy for Sensitive Groups.\n"
             << "People with asthma, children, and the elderly may feel breathing issues or irritation.\n"
             << "Healthy people are usually fine but should avoid long outdoor activities.\n"
             << "Best to stay indoors, keep windows closed, and wear a mask if going outside.";}
    else if (str == "Bharia Town") {                 
        cout << "AQI of Shalamar is 198\n"
             << "Unhealthy for Sensitive Groups.\n"
             << "People with asthma, children, and the elderly may feel breathing issues or irritation.\n"
             << "Healthy people are usually fine but should avoid long outdoor activities.\n"
             << "Best to stay indoors, keep windows closed, and wear a mask if going outside.";}       
    return 0;
}