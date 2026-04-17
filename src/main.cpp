#include <Geode/modify/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {

    void selected() {
        CCMenuItemSpriteExtra::selected();
        FMODAudioEngine::get()->playEffect("resources/honk.wav");
            if (auto spr = CCSprite::create("resources/soggycat.png")) {
            this->setSprite(spr);
            this->updateSprite();
        }
    }
};
