#include <iostream>
#include <iomanip>
#include "simplecalc.h"
using namespace std;

float convertToRefCurrency (int origCurrency, float valueCurrency); //Function Prototyping
float calculateCurr (int convertCurrencyToRef, float initialRes);
float convertToRefCurrency2 (int origCurrency2, float valueCurrency2);
float calculateCryptoCurr (int convertCurrencyToRef2, float initialRes2);
float calculateCryptoToCryptoCurr (int origCurrency3, int convertToRefCurrency3, float valueCurrency3);
void border();

string currencies [] = {
 "USD", "PHP", "EUR", "JPY", "CHF", "HKD", "SGD", "SAR", "BHD", "DKK",
 "SEK", "BND", "IDR", "THB", "TWD", "NZD", "CNY", "KRW", "MXN", "RUB",
 "TRY", "PLN", "ZAR", "ILS", "CLP", "PKR", "CZK", "HUF", "INR", "BRL",
 "ARS", "LYD", "MMK", "LAK", "NOK", "VND", "AED", "OMR", "QAR", "MYR",
 "COP", "RON", "IQD", "KES", "EGP", "TND", "MAD", "LKR", "FJD", "UYU", "NPR" };
float toRef [] = {
 1, 55.6, 0.95, 136.57, 0.94, 7.78, 1.35, 3.76, 0.38, 7.054,
 10.33, 1.35, 15670.68, 34.74, 30.73, 1.56, 6.98, 1308.11, 19.59, 63.21, 18.64, 4.42,
 17.29, 3.4, 857.3, 224.92, 22.85, 386.062, 82.4, 5.29, 171.78, 4.84, 2099.64, 17325.43,
 9.78, 23545.0, 3.67, 0.39, 3.67, 4.41, 4804.8, 4.63, 1459.98, 122.95, 24.63, 3.17, 10.52,
 367.44, 2.19, 38.83, 132.18};

string cryptocurrencies [] = {"DOGE", "BTC", "DASH", "ETH", "LTC", "XMR", "XRP"};
float cryptocurrenciesToReF [] = {10.98, 0.000056, 0.02, 0.00076, 0.013, 0.008, 2.77};




int main() {
    char select;
    border();
    cout<<"\t\t\t\t\t\tCURRENCY CONVERTER"<<endl;
    border();
    cout<<endl<<"[a] Convert Currency"<<endl;
    cout<<"[b] See List of Currencies"<<endl;
    cout<<"[c] Use Calculator"<<endl;
    cout<<"[d] Convert Cryptocurrency"<<endl<<endl;

    selectAgain:
        cout<<endl<<"|||||||| Choose function: ";
        cin>>select;
        cout<<endl;

        switch (select) {
        case 'a':
            {
                int origCurrency;
                float valueCurrency;
                int convertCurrencyToRef;
                border();
                cout<<"\t\tCONVERT CURRENCY"<<endl<<endl;

                selectAgain2:
                    cout<<"(Select from the options: see the list of currencies"<<endl;
                    cout<<"Enter your original currency: ";
                    cin>>origCurrency;
                    cout<<"Enter the value of your currency: ";
                    cin>>valueCurrency;
                    cout<<"Select from the options: see the list of currencies"<<endl;
                    cout<<"Enter the currency to convert into: ";
                    cin>>convertCurrencyToRef;
                    convertToRefCurrency(origCurrency, valueCurrency);

                    float initialRes=convertToRefCurrency(origCurrency, valueCurrency);
                    float finalRes=calculateCurr (convertCurrencyToRef, initialRes);
                    cout<<endl<<"||| "<<valueCurrency<<" "<<currencies[origCurrency]<<" to "<<currencies[convertCurrencyToRef]<<" is "<<fixed<<setprecision(2)<<finalRes<<endl;


                    cout<<endl;
                    char retryforCurrency;
                    retryAgain2:
                        cout<<"|||||||| Proceed to convert a currency again? (Y/N): ";
                        cin>>retryforCurrency;
                        cout<<endl;

                        if(retryforCurrency=='Y' || retryforCurrency=='y') {
                            goto selectAgain2;
                        } else if(retryforCurrency=='N' || retryforCurrency=='n') {
                            border();
                            goto selectAgain;
                        } else {
                            cout<<"Please select a valid option. ||||||||"<<endl;
                            goto retryAgain2;
                        }
                        border();
                break;
            }

        case 'b':
            {
                border();
                cout<<"List of Currencies: "<<endl<<endl;
                for(int i=0;i<=0;i++) {
                    cout<<"  ["<<i<<"] "<<currencies[i];
                }
                for(int i=1;i<=50;i++) {
                    cout<<"  ["<<i<<"] "<<currencies[i];
                    if(i%10==0) {
                        cout<<"\n";
                    }
                }
                border();
                break;
            }

        case 'c':
            {
                border();
                cout<<"\t\tSIMPLE CALCULATOR"<<endl<<endl;
                simplecalc();
                border();
                break;
            }

        case 'd':
            {
                char select2;
                border();
                cout<<"\t\t\tCRYPTOCURRENCY EXCHANGE CENTER"<<endl<<endl;
                cout<<"List of Cryptocurrencies"<<endl;
                for(int i=0;i<=6;i++) {
                    cout<<"  ["<<i<<"] "<<cryptocurrencies[i];
                }
                cout<<endl<<endl;

                cout<<"[a] Convert Cryptocurrency"<<endl;
                cout<<"[b] Crypto to Crypto Conversion"<<endl;
                cout<<"[c] Go to Menu"<<endl<<endl;

                selectAgain3:
                    cout<<"What do you wish to do: ";
                    cin>>select2;
                    cout<<endl;

                    switch(select2) {
                    case 'a':
                        {
                            int origCurrency2;
                            float valueCurrency2;
                            int convertCurrencyToRef2;
                            cout<<"\t\t\t CONVERT CRYPTOCURRENCY"<<endl<<endl;
                            cout<<"(Select from the options: see list of cryptocurrencies)"<<endl;
                            cout<<"Enter your cryptocurrency: ";
                            cin>>origCurrency2;
                            cout<<"Enter the value of your cryptocurrency: ";
                            cin>>valueCurrency2;
                            cout<<"(Select from the options: see list of currencies)"<<endl;
                            cout<<"Enter the currency to convert into: ";
                            cin>>convertCurrencyToRef2;
                            convertToRefCurrency2(origCurrency2, valueCurrency2);

                            float initialRes2=convertToRefCurrency2(origCurrency2, valueCurrency2);
                            float finalRes2=calculateCryptoCurr (convertCurrencyToRef2, initialRes2);
                            cout<<endl<<"||| "<<valueCurrency2<<" "<<cryptocurrencies[origCurrency2]<<" to "<<currencies[convertCurrencyToRef2]<<" is "<<fixed<<setprecision(2)<<finalRes2<<endl;
                            break;
                        }

                    case 'b':
                        {
                            int origCurrency3;
                            float valueCurrency3;
                            int convertCurrencyToRef3;
                            cout<<"(Select from the options: see list of cryptocurrencies)"<<endl;
                            cout<<"Enter your cryptocurrency: ";
                            cin>>origCurrency3;
                            cout<<"Enter the value of your cryptocurrency: ";
                            cin>>valueCurrency3;
                            cout<<"(Select from the options: see list of cryptocurrencies)"<<endl;
                            cout<<"ENter the cryptocurrency to convert into: ";
                            cin>>convertCurrencyToRef3;
                            calculateCryptoToCryptoCurr (origCurrency3, convertCurrencyToRef3, valueCurrency3);

                            cout<<endl<<"||| "<<valueCurrency3<<" "<<cryptocurrencies[origCurrency3]<<" to "<<cryptocurrencies[convertCurrencyToRef3]<<" is "<<calculateCryptoToCryptoCurr(origCurrency3, convertCurrencyToRef3, valueCurrency3)<<endl;
                            break;
                        }

                    case 'c':
                        {
                            border();
                            goto selectAgain;
                            break;
                        }

                    default:
                        {
                            cout<<"Function not found. Please select again."<<endl;
                            goto selectAgain2;
                        }
                    }

                cout<<endl;
                char retryforCrypto;
                retryAgain3:
                    cout<<"|||||||| Proceed with another function in this category? (Y/N): ";
                    cin>>retryforCrypto;
                    cout<<endl;

                    if (retryforCrypto=='Y' || retryforCrypto=='y') {
                        goto selectAgain3;
                    } else if(retryforCrypto=='N' || retryforCrypto=='n') {
                        border();
                        goto selectAgain;
                    } else {
                        cout<<"Please select a valid option. ||||||||"<<endl;
                        goto retryAgain3;
                    }
            }

        }
    cout<<endl;
    char retry;
    retryAgain:
    cout<<"|||||||| Proceed with another function? (Y/N):";
    cin>>retry;

    if (retry == 'Y' || retry == 'y') {
        goto selectAgain;
    } else if (retry == 'N' || retry == 'n') {
        cout<<"Thank you for using our app!";
    } else {
        cout<<"Please select valid option. ||||||||"<<endl;
        goto retryAgain; }

     return 0;
}

float convertToRefCurrency (int origCurrency, float valueCurrency) { //FOR NORMAL CONVERSION
    float initialRes = valueCurrency/toRef[origCurrency];
    return initialRes;
}

float calculateCurr (int convertCurrencyToRef, float initialRes) { //FOR NORMAL CONVERSION
    float finalRes = initialRes * toRef[convertCurrencyToRef];
    return finalRes;
}


float convertToRefCurrency2 (int origCurrency2, float valueCurrency2) { //FOR CRYPTOCURRENCY CONVERSION
    float initialRes2 = valueCurrency2/cryptocurrenciesToReF[origCurrency2];
    return initialRes2;
}

float calculateCryptoCurr (int convertCurrencyToRef2, float initialRes2) {
    float finalRes2 = finalRes2 * toRef[convertCurrencyToRef2];
    return finalRes2;
}

float calculateCryptoToCryptoCurr (int origCurrency3, int convertToRefCurrency3, float valueCurrency3) { //FOR CRYPTO TO CRYPTO CURRENCY CONVERSION
     float finalRes3 = (cryptocurrenciesToReF[convertToRefCurrency3]*valueCurrency3)/cryptocurrenciesToReF[origCurrency3];
    return finalRes3;
}

void border() {
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
}
