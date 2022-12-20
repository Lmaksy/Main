#include <bits/stdc++.h>
#include "yakovlevlib.hpp"
constexpr double eps = 0.00001;
struct Pendulum {
    const double dt = 0.01, g = 9.8;
    double m = 10, k = 100, mu = 1;
    double x_stable = 0, x = 10, v = 0, f = 0, a = 0, y = 0;
    double t = 0;
};
Pendulum model, mt_temp;
double sign(double t) {
    if (t - 0 > eps) {
        return 1;
    }
    if (t - 0 < eps) {
        return -1;
    }
    return 0;
}
void move(Pendulum &model) {
    model.t += model.dt;
    model.f = model.k * (model.x_stable - model.x) - sign(model.v) * model.mu * model.m * model.g;
    model.a = model.f / model.m;
    model.v += model.a * model.dt;
    model.x += model.v * model.dt;
}
int main(){
    for(double t = 0; t < 1000; t += 1) {
        move(model);
        std::cout << model.x << std::endl;
    }}
