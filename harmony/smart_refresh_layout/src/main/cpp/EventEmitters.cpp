
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterCpp.js
 */

#include "EventEmitters.h"

namespace facebook {
namespace react {

void SmartRefreshLayoutEventEmitter::onRefresh(OnRefresh event) const {
  dispatchEvent("refresh", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void SmartRefreshLayoutEventEmitter::onHeaderPulling(OnHeaderPulling event) const {
  dispatchEvent("headerPulling", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "percent", event.percent);
payload.setProperty(runtime, "offset", event.offset);
payload.setProperty(runtime, "headerHeight", event.headerHeight);
    return payload;
  });
}
void SmartRefreshLayoutEventEmitter::onHeaderReleasing(OnHeaderReleasing event) const {
  dispatchEvent("headerReleasing", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    payload.setProperty(runtime, "percent", event.percent);
payload.setProperty(runtime, "offset", event.offset);
payload.setProperty(runtime, "headerHeight", event.headerHeight);
    return payload;
  });
}
void SmartRefreshLayoutEventEmitter::onPullDownToRefresh(OnPullDownToRefresh event) const {
  dispatchEvent("pullDownToRefresh", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void SmartRefreshLayoutEventEmitter::onReleaseToRefresh(OnReleaseToRefresh event) const {
  dispatchEvent("releaseToRefresh", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}
void SmartRefreshLayoutEventEmitter::onHeaderReleased(OnHeaderReleased event) const {
  dispatchEvent("headerReleased", [event=std::move(event)](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}


} // namespace react
} // namespace facebook
