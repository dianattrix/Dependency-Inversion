//
// Created by diana on 29/8/2020.
//

#ifndef MY_PROJECT_NAME_IPAYMENTSENDER_H
#define MY_PROJECT_NAME_IPAYMENTSENDER_H
#include <string>
class IPaymentSender
{
public:
    IPaymentSender()= default;
    virtual ~IPaymentSender()= default;
    virtual std::string sendPayment() = 0;
};
#endif //MY_PROJECT_NAME_IPAYMENTSENDER_H
