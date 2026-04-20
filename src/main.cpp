#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {
    void selected() {
        CCMenuItemSpriteExtra::selected();

        auto sprite = this->getNormalImage();
        if (!sprite) return;

        auto newSpr = CCSprite::create("soggycat.png");
        if (!newSpr) return;

        sprite->setVisible(false);

        if (!this->getChildByTag(999)) {
            newSpr->setPosition(sprite->getPosition());
            newSpr->setScale(sprite->getScale());
            newSpr->setTag(999);
            this->addChild(newSpr);
        }
    }

    void unselected() {
        CCMenuItemSpriteExtra::unselected();

        auto sprite = this->get
