#include "config.h"
namespace MathUtil {
    enum SupportedWindow { HammingWindow = 0, HannWindow, HanningWindow, BlackmanWindow, FlattopWindow, TriangWindow};
    QwtData hiperbolicChart(const Position& center, Real width, Size points);
    Vector quadraticEquationSolver(Real a, Real b, Real c);
    Real soundPropagationVelocity(Real temperatureCelcius);
    Vector rand(Real min, Real max, Size number);
    Vector window(SupportedWindow window, Size size);
}
