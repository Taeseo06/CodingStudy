package com.example.mvvmproject

import android.app.Application
import android.content.Context
import androidx.lifecycle.MutableLiveData

class MainRepository(val application: Application) {
    val text = MutableLiveData<String>()

    suspend fun getText(){
        val roomModule = RoomModule(application.applicationContext)
        text.postValue(roomModule.getData())
    }

}