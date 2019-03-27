#pragma once

namespace mbgl {

class ImageManagerObserver {
public:
    virtual ~ImageManagerObserver() = default;

    virtual void onStyleImageMissing(const std::string&, std::function<void()>) {}
};

} // namespace mbgl
