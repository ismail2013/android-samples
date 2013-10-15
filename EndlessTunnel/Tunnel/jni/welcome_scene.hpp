/*
 * Copyright (C) 2013 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef endlesstunnel_welcome_scene_hpp
#define endlesstunnel_welcome_scene_hpp

#include "engine.hpp"
#include "our_shader.hpp"
#include "tex_quad.hpp"
#include "ui_scene.hpp"
#include "util.hpp"

/* The "welcome scene" (main menu) */
class WelcomeScene : public UiScene {
    protected:
        // IDs for our buttons:
        int mPlayButtonId;
        int mSignInButtonId;
        int mSignOutButtonId;
        int mWhyButtonId;
        int mAchievementsButtonId;
        int mLeaderboardButtonId;
        int mStoryButtonId;
        int mAboutButtonId;

        virtual void RenderBackground();
        virtual void OnButtonClicked(int id);

        void UpdateWidgetStates();

        OurShader *mOurShader;
        Texture *mGooglePlusTexture;
        TexQuad *mGooglePlusTexQuad;

    public:
        WelcomeScene();
        ~WelcomeScene();

        virtual void OnCreateWidgets();
        virtual void OnStartGraphics();
        virtual void OnKillGraphics();

        virtual void DoFrame();
};

#endif
