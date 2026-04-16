class $modify(MyButtonHook, CCMenuItemSpriteExtra) {

    void selected() {
        CCMenuItemSpriteExtra::selected();

        auto spr = CCSprite::create("myTexture.png");
        if (spr) {
            this->setSprite(spr);
            this->updateSprite();
        }
    }

    void activate() {
        CCMenuItemSpriteExtra::activate();

        auto spr = CCSprite::create("myTexture.png");
        if (spr) {
            this->setSprite(spr);
            this->updateSprite();
        }
    }
};
