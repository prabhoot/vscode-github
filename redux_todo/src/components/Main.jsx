import React from 'react'
import {Button, Space, Input, Layout, Checkbox} from 'antd'
import {Content, Header} from 'antd/es/layout/layout'
import add from './script';
const onChange = (e) => {
  console.log(`checked = ${e.target.checked}`);
};
export const Main = () => {
  return (
    <div >
      <Layout>
        <center>
          <Header>Todo List </Header>
          <Content>
            <Space.Compact style={{width: '80%'}}>
              <Input placeholder='Type Here!!' />
              <Button type="primary" onClick={add}>ADD </Button>
            </Space.Compact>
            <section>
              <div id='container'>
                <Checkbox onChange={onChange} >this is one</Checkbox>
                <Checkbox onChange={onChange} >this is one</Checkbox>
              </div>
            </section>
          </Content>
        </center>
      </Layout>
    </div>
  )
}
