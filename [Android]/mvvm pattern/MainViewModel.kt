package com.example.mvvmproject

import android.app.Application
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class MainViewModel(application: Application) : ViewModel() {
    private val repository = MainRepository(application)
    val text : MutableLiveData<String>
        get() = repository.text


    init {
        viewModelScope.launch(Dispatchers.IO) {
            viewModelScope.launch {
                repository.getText()
            }.join()
            text.postValue(text.value + "11010")
        }
    }
}