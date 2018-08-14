#pragma once

#include <mbgl/style/property_value.hpp>
#include <mbgl/renderer/property_evaluator.hpp>
#include <mbgl/renderer/data_driven_property_evaluator.hpp>

namespace mbgl {
namespace style {

template <class T>
class LayoutProperty {
public:
    using EvaluatorType = PropertyEvaluator<T>;
    using Type = T;
    static constexpr bool IsDataDriven = false;
};

template <class T>
class DataDrivenLayoutProperty {
public:
    using EvaluatorType = DataDrivenPropertyEvaluator<T>;
    using Type = T;
    static constexpr bool IsDataDriven = true;
};

} // namespace style
} // namespace mbgl
