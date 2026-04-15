#include <Geode/Geode.hpp>
#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

using namespace geode::prelude;

class $modify(CCMenuItemSpriteExtra) {
    void activate() {
        CCMenuItemSpriteExtra::activate();
        FMODAudioEngine::sharedEngine()->playEffect("honk.wav");
        auto texCache = CCTextureCache::sharedTextureCache();
        auto newTexture = texCache->addImage("soggycat.png", false);

        if (newTexture) {
            if (auto sprite = static_cast<CCSprite*>(this->m_normalImage)) {
                sprite->setTexture(newTexture);
                auto size = newTexture->getContentSize();
                sprite->setTextureRect({ 0, 0, size.width, size.height });
                this->updateSprite();
            }
        } else {
            log::error("cant find soggy.png, check resources pls");
        }
    }
};
