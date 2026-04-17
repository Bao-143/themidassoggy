#include <Geode/modify/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {

    void selected() {
        CCMenuItemSpriteExtra::selected();
        if (auto frame = CCSpriteFrameCache::get()->spriteFrameByName("whatever")) {
            sprite->setDisplayFrame(frame);
        }
    }
};
