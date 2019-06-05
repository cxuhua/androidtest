//
//  IOSEngine.cpp
//  cxEngine2D
//
//  Created by xuhua on 6/17/15.
//  Copyright (c) 2015 xuhua. All rights reserved.
//


#include <engine/cxSprite.h>
#include <engine/cxRotate.h>
#include "Game.h"

CX_CPP_BEGIN

CX_IMPLEMENT(Game);

Game::Game()
{

}

Game::~Game()
{
    
}

void Game::OnMain()
{
    LoadTexture("item.png");

    cxSprite *sp = cxSprite::Create();
    sp->SetTexture("item.png");
    sp->SetSize(cxSize2F(200,200));
    Window()->Append(sp);

    cxRotateTo *rt = cxRotateTo::Create(M_PI*4,10);
    rt->AttachTo(sp);
    rt->onExit+=[](cxAction *pav){
        pav->Reverse()->AttachTo(pav->View());
    };
}

CX_CPP_END

