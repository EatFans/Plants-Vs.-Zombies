//
// Created by EatFan on 2023/11/12.
//

#include "SceneManager.h"

void SceneManager::setScene(Scene *newScene) {
    currentScene = newScene;
    currentScene->init();
}

void SceneManager::updateCurrentScene() {
    if (currentScene){
        currentScene->update();
    }
}

void SceneManager::renderCurrentScene() {
    if (currentScene){
        currentScene->render();
    }
}
